#pragma once
#include "CoreMinimal.h"
#include "CinematicDefaultPawnProvider.h"
#include "InventorySystemGamemodeInterface.h"
#include "InteriorVolumeData.h"
#include "GameFramework/GameModeBase.h"
#include "DawnwalkerGameModeBase.generated.h"

class AFastTravelMarker;
class AHUD;
class APawn;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class DAWNWALKER_API ADawnwalkerGameModeBase : public AGameModeBase, public ICinematicDefaultPawnProvider, public IInventorySystemGamemodeInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTriedSprintWhileOverEncumbered);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriedSprintWhileOverEncumbered TriedSprintWhileOverEncumberedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> DefaultPlayerCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHUD> DefaultHUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorVolumeData TestTest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ForcedFadeWidget;
    
public:
    ADawnwalkerGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Test();
    
    UFUNCTION(BlueprintCallable)
    void RegisterFastTravelMarker(const FString& Identifier, AFastTravelMarker* Marker);
    
    UFUNCTION(BlueprintCallable)
    AFastTravelMarker* GetFastTravelMarker(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    TArray<AFastTravelMarker*> GetAllFastTravelMarkers();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutForcedFadeWidget();
    

    // Fix for true pure virtual functions not being implemented
};

