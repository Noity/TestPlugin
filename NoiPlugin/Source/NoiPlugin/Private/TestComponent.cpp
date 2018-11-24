// Fill out your copyright notice in the Description page of Project Settings.

#include "TestComponent.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UTestComponent::UTestComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTestComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTestComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	// 1秒置きにオーナーの位置を出力する
	TimeForPrint += DeltaTime;
	if (TimeForPrint > 1)
	{
		PrintOwnerLocation();
		TimeForPrint = 0.0f;
	}
}

// コンポーネントのオーナーの位置を出力する
void UTestComponent::PrintOwnerLocation()
{
	// アクターオーナーの位置取得
	AActor* Owner = GetOwner();
	FVector ownerLocation = Owner->GetActorLocation();

	// デバッグプリント
	if (GEngine)
	{
		FString str = FString::Printf(TEXT("X=%f, Y=%f, Z=%f"), ownerLocation.X, ownerLocation.Y, ownerLocation.Z);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, str);
	}
}
