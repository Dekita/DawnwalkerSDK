#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DogwoodSystemWorldSettings.h"
#include "Templates/SubclassOf.h"
#include "WorldBorderDef.h"
#include "DawnwalkerWorldSettings.generated.h"

class UObject;
class UQuestSketch;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerWorldSettings : public ADogwoodSystemWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestSketch> OverrideQuestClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestSketch> CourtSketchClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorldBorderDef> WorldBorderDefinitions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideWorldMapBounds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapOverrideTopLeft;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapOverrideBottomRight;
    
    ADawnwalkerWorldSettings(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetQuestOverride(TSubclassOf<UQuestSketch> InOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetQuest(TSubclassOf<UQuestSketch> NewQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static bool GetOverridenMapBounds(const UObject* InWorldContext, FVector2D& TopLeft, FVector2D& BottomRight);
    
};

