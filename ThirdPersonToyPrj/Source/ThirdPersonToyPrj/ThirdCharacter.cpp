// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdCharacter.h"

// Sets default values
AThirdCharacter::AThirdCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	PlayerInputComponent->BindAxis("LookUp", this, &AThirdCharacter::AddControllerPitchInput);

	// action 바인딩 구성
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AThirdCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AThirdCharacter::StopJump);
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
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AThirdCharacter::StartJump()
{
	bPressedJump = true;
}

void AThirdCharacter::StopJump()
{
	bPressedJump = false;
}