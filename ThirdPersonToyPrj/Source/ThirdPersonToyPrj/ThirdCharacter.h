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

	// 전후 이동 처리
	UFUNCTION()
	void MoveForward(float Value);

	// 좌우 이동 처리
	UFUNCTION()
	void MoveRight(float Value);

	// 점프 시작, 점프 플래그 설정
	UFUNCTION()
	void StartJump();

	// 점프 끝, 점프 플래그 삭제
	UFUNCTION()
	void StopJump();

	// 카메라 지지대
	UPROPERTY(EditAnywhere, Category = camera)
	class USpringArmComponent* SpringArm;

	// 카메라
	UPROPERTY(VisibleAnywhere, Category = camera)
	class UCameraComponent* ThirdCameraComponent;
};
