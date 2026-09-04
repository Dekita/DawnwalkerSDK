#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BypassingPairBuffer.h"
#include "RebelBypassingSystem.generated.h"

UCLASS(Blueprintable)
class REBELBYPASSING_API URebelBypassingSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBypassingPairBuffer> PairBuffers;
    
public:
    URebelBypassingSystem();

private:
    UFUNCTION(BlueprintCallable)
    void ProcessNearbyCharacters();
    
};

