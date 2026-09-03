#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "LoadingProviderInterface.h"
#include "EFastTravelResult.h"
#include "MappinInstanceId.h"
#include "FastTravelSystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class DOGWOODMAP_API UFastTravelSystem : public UWorldSubsystem, public ILoadingProviderInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFastTraveledDelegateBP);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFastTraveledDelegateBP OnFastTraveled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FastTravelSafetyPlatform;
    
public:
    UFastTravelSystem();

    UFUNCTION(BlueprintCallable)
    EFastTravelResult FastTravelToPin(const FMappinInstanceId& InstanceId);
    
    UFUNCTION(BlueprintCallable)
    EFastTravelResult FastTravelToLocation(const FVector& Location, const FRotator& Rotation);
    

    // Fix for true pure virtual functions not being implemented
};

