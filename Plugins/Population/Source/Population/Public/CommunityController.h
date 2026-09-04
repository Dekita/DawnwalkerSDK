#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "CommunityController.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API ACommunityController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverSetCommunityTarget;
    
public:
    ACommunityController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCommunityTargetReached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocationReached(const FVector& CurrentLocation, const FVector& TestedLocation, const bool bAtSpawn);
    
};

