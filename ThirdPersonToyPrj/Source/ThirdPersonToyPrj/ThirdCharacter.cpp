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

	// ī�޶� ������
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent); // CameraBoom�� �� �߽ɿ� ����, CameraBoom�� RootComponent�� ����(�ڽ�) ������Ʈ�� ��.
	SpringArm->bUsePawnControlRotation = true; // ȸ�� ��(��Ʈ�ѷ��� �߽����� �� �������� ��)
	
	// 3��Ī ī�޶� ������Ʈ ����
	ThirdCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	// ī�޶� ������Ʈ�� ĸ�� ������Ʈ�� ����.
	ThirdCameraComponent->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	// ���� ī�޶� �����̼� ��� ����.
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

	// Movement ���ε� ����
	PlayerInputComponent->BindAxis("MoveForward", this, &AThirdCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AThirdCharacter::MoveRight);

	// look ���ε� ����
	PlayerInputComponent->BindAxis("Turn", this, &AThirdCharacter::AddControllerYawInput);

	// action ���ε� ����
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AThirdCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AThirdCharacter::StopJump);

	// Run ���ε� ����
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AThirdCharacter::Run);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &AThirdCharacter::StopRun);

	// Crouch ���ε� ����
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AThirdCharacter::DoCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AThirdCharacter::StopCrouch);
}

void AThirdCharacter::MoveForward(float Value)
{
	// ��� ���� �������� �˾Ƴ���, �÷��̾ �� �������� �̵��ϰ��� �Ѵٰ� ���
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AThirdCharacter::MoveRight(float Value)
{
	// ��� ���� ���������� �˾Ƴ���, �÷��̾ �� �������� �̵��ϰ��� �Ѵٰ� ���
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y); // ������ ���� ȸ����
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