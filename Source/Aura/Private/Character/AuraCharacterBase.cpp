// Copyright 3Ducks


#include "Character/AuraCharacterBase.h"

// Sets default values
AAuraCharacterBase::AAuraCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Criar componente da arma
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	//Colocar a arma em um Socket
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	//Remover a colisão
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}



