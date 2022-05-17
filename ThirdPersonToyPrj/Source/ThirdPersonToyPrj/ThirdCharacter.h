// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ThirdCharacter.generated.h"

UCLASS()
class THIRDPERSONTOYPRJ_API AThirdCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AThirdCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ���� �̵� ó��
	UFUNCTION()
	void MoveForward(float Value);

	// �¿� �̵� ó��
	UFUNCTION()
	void MoveRight(float Value);

	// ���� ����, ���� �÷��� ����
	UFUNCTION()
	void StartJump();

	// ���� ��, ���� �÷��� ����
	UFUNCTION()
	void StopJump();

	// ī�޶� ������
	UPROPERTY(EditAnywhere, Category = camera)
	class USpringArmComponent* SpringArm;

	// ī�޶�
	UPROPERTY(VisibleAnywhere, Category = camera)
	class UCameraComponent* ThirdCameraComponent;
};
