#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameFramework/Volume.h"
#include "ERebelRoadsUseMode.h"
#include "RebelRoadsVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class REBELROADS_API ARebelRoadsVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsUseMode Mode;
    
public:
    ARebelRoadsVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bFromSweep, const FHitResult& InSweepResult);
    
};

