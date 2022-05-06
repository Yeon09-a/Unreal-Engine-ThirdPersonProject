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

	// Movement ���ε� ����
	PlayerInputComponent->BindAxis("MoveForward", this, &AThirdCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AThirdCharacter::MoveRight);

	// look ���ε� ����
	PlayerInputComponent->BindAxis("Turn", this, &AThirdCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AThirdCharacter::AddControllerPitchInput);

	// action ���ε� ����
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AThirdCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AThirdCharacter::StopJump);
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