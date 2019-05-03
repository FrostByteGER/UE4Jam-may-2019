// Fill out your copyright notice in the Description page of Project Settings.

#include "Pro/Bullet.h"


// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Damage = 10.0f;
	ProjectileSpeed = 750.0f;
	GravityScale = 1.0f;
	Lifetime = 4.0f;

	Bullet = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Bullet"));
	RootComponent = Bullet;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));

}

// Called when the game starts or when spawned
void ABullet::BeginPlay_Implementation()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick_Implementation( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

