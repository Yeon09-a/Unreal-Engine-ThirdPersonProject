// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdCharacter.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFrameWork/CharacterMovementComponent.h"


// Sets default values
AThirdCharacter::AThirdCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	// 카메라 지지대
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent); // CameraBoom을 맨 중심에 붙임, CameraBoom을 RootComponent의 하위(자식) 컴포넌트로 함.
	SpringArm->bUsePawnControlRotation = true; // 회전 값(컨트롤러를 중심으로 한 로테이터 값)
	
	// 3인칭 카메라 컴포넌트 생성
	ThirdCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	// 카메라 컴포넌트를 캡슐 컴포넌트에 붙임.
	ThirdCameraComponent->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	// 폰의 카메라 로테이션 제어를 불허.
	ThirdCameraComponent->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
}

// Called when the game starts or when spawned
void AThirdCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThirdCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThirdCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Movement 바인딩 구성
	PlayerInputComponent->BindAxis("MoveForward", this, &AThirdCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AThirdCharacter::MoveRight);

	// look 바인딩 구성
	PlayerInputComponent->BindAxis("Turn", this, &AThirdCharacter::AddControllerYawInput);

	// action 바인딩 구성
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AThirdCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AThirdCharacter::StopJump);

	// Run 바인딩 구성
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AThirdCharacter::Run);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &AThirdCharacter::StopRun);

	// Crouch 바인딩 구성
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AThirdCharacter::DoCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AThirdCharacter::StopCrouch);
}

void AThirdCharacter::MoveForward(float Value)
{
	// 어느 쪽이 전방인지 알아내어, 플레이어가 그 방향으로 이동하고자 한다고 기록
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AThirdCharacter::MoveRight(float Value)
{
	// 어느 쪽이 오른쪽인지 알아내어, 플레이어가 그 방향으로 이동하고자 한다고 기록
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y); // 절대축 기준 회전값
	AddMovementInput(Direction, Value);

}

void AThirdCharacter::StartJump()
{
	if (GetCharacterMovement()->IsFalling() && GetCharacterMovement()->GetMovementName() != "Flying")
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		GetCharacterMovement()->bCheatFlying = true;

	}
	else if (GetCharacterMovement()->GetMovementName() == "Flying")
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
		GetCharacterMovement()->bCheatFlying = false;
	}
	else
	{
		bPressedJump = true;
	}
}

void AThirdCharacter::StopJump()
{
	bPressedJump = false;
}

void AThirdCharacter::Run()
{
	GetCharacterMovement()->MaxWalkSpeed *= 2;
}

void AThirdCharacter::StopRun()
{
	GetCharacterMovement()->MaxWalkSpeed /= 2;
}

void AThirdCharacter::DoCrouch()
{
	Crouch();
}

void AThirdCharacter::StopCrouch()
{
	UnCrouch();
}