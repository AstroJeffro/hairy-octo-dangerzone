// Fill out your copyright notice in the Description page of Project Settings.

#include "TutorialCode.h"
#include "Pickup.h"


// Sets default values
APickup::APickup(const FObjectInitializer& PCIB)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//The pickup is valid when it is created
	bIsActive = true;

	// Create the root SphereComponent to handle the pickup's collision
	BaseCollisionComponent = PCIB.CreateDefaultSubobject<USphereComponent>(this, TEXT("BaseSphereComponent"));

	// Set the SphereComponent as the root component
	RootComponent = BaseCollisionComponent;

	// Create the static mesh component
	PickupMesh = PCIB.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("PickupMesh"));

	// Turn physics on for the static mesh
	PickupMesh->SetSimulatePhysics(true);

	// Attach the StaticMeshComponent to the root component
	PickupMesh->AttachTo(RootComponent);

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void APickup::OnPickedUp()
{
	// There is no default behavior for a Pickup 
}

