// Copyright 3Ducks


#include "Player/AuraPlayerController.h"
#include "EnhancedInputSubsystems.h"
AAuraPlayerController::AAuraPlayerController()
{
	//Baseado em varios servidores. update no server
	bReplicates = true;

	
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//Precisamos setar no BP
	check(AuraContext); // Check de falha do ponteiro

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	check(Subsystem);

	Subsystem->AddMappingContext(AuraContext, 0);

	bShowMouseCursor = true;

	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}
