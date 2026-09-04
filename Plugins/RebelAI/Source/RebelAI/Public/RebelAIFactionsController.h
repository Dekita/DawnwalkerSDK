#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERebelAIAttitude.h"
#include "RebelAIControllerBase.h"
#include "RebelAIFactionsController.generated.h"

class URebelAIFactionMatrixAsset;
class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAIFactionsController : public URebelAIControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> PlayerStub;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIFactionMatrixAsset* FactionMatrix;
    
public:
    URebelAIFactionsController();

    UFUNCTION(BlueprintCallable)
    void SetAttitudeTowardsPlayer(URebelAIStub* AIStub, ERebelAIAttitude InAttitude);
    
    UFUNCTION(BlueprintCallable)
    void SetAttitudeBetweenFactions(const FGameplayTag& FactionA, const FGameplayTag& FactionB, ERebelAIAttitude AttitudeToSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelAIAttitude GetAttitudeBetweenStubs(const URebelAIStub* StubA, const URebelAIStub* StubB) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelAIAttitude GetAttitudeBetweenFactions(const FGameplayTag& FactionA, const FGameplayTag& FactionB) const;
    
    UFUNCTION(BlueprintCallable)
    static void BP_SetAttitude(URebelAIStub* StubA, URebelAIStub* StubB, ERebelAIAttitude InAttitude, bool bKeep);
    
};

