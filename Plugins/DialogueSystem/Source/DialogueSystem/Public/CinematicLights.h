#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DialogueLightGeneratedSettings.h"
#include "DialogueLightSettings.h"
#include "CinematicLights.generated.h"

class ULightComponent;

UCLASS(Abstract, Blueprintable)
class DIALOGUESYSTEM_API ACinematicLights : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueLightSettings BaseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueLightGeneratedSettings GeneratedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableShadows: 1;
    
    ACinematicLights(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseStrongestNearbyLightPropertiesForKeyLight() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupLight(ULightComponent* Light);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStrongestNearbyLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULightComponent* GetStrongestNearbyLightComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStrongestLightAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateKeyLightIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateDirectionalLightIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateDirectionalLightAngle() const;
    
};

