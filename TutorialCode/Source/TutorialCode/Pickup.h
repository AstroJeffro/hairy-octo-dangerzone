// Fill out your copyright notice in the Description page of Project Settings.
// Declare things like variables, functions, or components your class will contain
#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class TUTORIALCODE_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup(const FObjectInitializer& PCIB);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	/** True when pickup is able to be piced up and Flase if ssomething deactives it. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pickup)
	bool bIsActive;

	/** Simple Collision primitive to use as the root component */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Pickup)
	class USphereComponent* BaseCollisionComponent;

	/** StaticMeshComponent to represent the pickup in the level */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Pickup)
	class UStaticMeshComponent* PickupMesh;

	/** Function to call when the Pickup is collected */
	virtual	void OnPickedUp();


};