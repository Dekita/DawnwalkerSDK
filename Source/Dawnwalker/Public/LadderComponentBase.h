#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "LadderComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API ULadderComponentBase : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DismountOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTopEntranceOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBottomEntranceOpen;
    
    ULadderComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnterUp(FVector ActorLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldEndLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLadderLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLadderGoDownOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLadderClimbOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLadderClimbDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindStartLocationOnLadder(const FVector& InPoint, bool bIsUp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindNearestLocationOnLadderDuringSlideExit(const FVector& InPoint, const FVector& CurrentLocation, bool& OutIsInSpot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindNearestLocationOnLadder(const FVector& InPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindDistanceAlongLadder(const FVector& InPoint) const;
    
};

