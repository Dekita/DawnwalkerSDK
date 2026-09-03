#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "RegionData.h"
#include "RegionStatusUpdatedDelegateDelegate.h"
#include "RegionsSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API URegionsSubsystem : public UTickableWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionStatusUpdatedDelegate OnRegionStatusUpdated;
    
    URegionsSubsystem();

    UFUNCTION(BlueprintCallable)
    void TryLockRegionLevel(int32 RegionIndex, bool EnteredRegion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVisitedRegion(const int32 Region) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetRegionLevel(const int32 Region) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegionIndexForPosition(const FVector position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRegionData GetRegionForPosition(const FVector position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRegionData GetRegionForActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegionCount();
    

    // Fix for true pure virtual functions not being implemented
};

