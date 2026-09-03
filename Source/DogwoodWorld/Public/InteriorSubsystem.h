#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InteriorChangedSignatureDelegate.h"
#include "InteriorSubsystemReadyDelegate.h"
#include "InteriorVolumeData.h"
#include "InteriorSubsystem.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UInteriorSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorChangedSignature OnInteriorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorSubsystemReady OnInteriorSubsystemReady;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> OverlappedInteriors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FInteriorVolumeData> InteriorData;
    
public:
    UInteriorSubsystem();

    UFUNCTION(BlueprintCallable)
    void KickPlayerOutOfInterior();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInteriorVolumeData GetTopmostInteriorData() const;
    
};

