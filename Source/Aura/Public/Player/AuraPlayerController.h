// Copyright 3Ducks

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"

class UInputMappingContext;


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


private:
	UPROPERTY(EditAnywhere, Category="Input");
	//ponteiro para o mapa do input
	TObjectPtr<UInputMappingContext> AuraContext;
};
