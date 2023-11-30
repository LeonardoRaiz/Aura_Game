// Copyright 3Ducks

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
	//criar construtores

public:
	AAuraPlayerController();
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category="Input");
	//ponteiro para o mapa do input
	TObjectPtr<UInputMappingContext> AuraContext; // Input Map
	
	UPROPERTY(EditAnywhere, Category="Input");
	TObjectPtr<UInputAction> MoveAction; // Input Move Action

	void Move(const FInputActionValue& InputActionValue);
};
