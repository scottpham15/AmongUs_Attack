// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadBody.h"

#include "MyCharacter.h"


// Sets default values
ADeadBody::ADeadBody()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SetRootComponent(Sphere);
	Sphere->SetSphereRadius(500.0);
	Sphere->SetHiddenInGame(false);
	
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(RootComponent);
}

void ADeadBody::OnOverlapBegin(class UPrimitiveComponent* newComp, class AActor* OtherActor,
                               class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IsValid(Cast<AMyCharacter>(OtherActor)))
	{
		Cast<AMyCharacter>(OtherActor)->DeadBodyReported(this);
	}
}

// Called when the game starts or when spawned
void ADeadBody::BeginPlay()
{
	Super::BeginPlay();
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ADeadBody::OnOverlapBegin);
}

// Called every frame
void ADeadBody::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

