#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EQuestTimeProgressionType.h"
#include "QuestTimeProgressionTypeDefinition.h"
#include "DogwoodSystemSettings.generated.h"

class UDogwoodControlsLegendPreset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODSYSTEM_API UDogwoodSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQuestTimeProgressionType, FQuestTimeProgressionTypeDefinition> QuestTimeProgressionTypes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FText> DayTimeNamesByStartSegment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FText> NightTimeNamesByStartSegment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDogwoodControlsLegendPreset> ControlsLegendPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalTimeInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TimeSegmentsPer12H;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DaytimeStartHour;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGameStartAtDaytimeStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DefaultGameStartHour;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewTransitions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DayStartVideoName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NightStartVideoName;
    
    UDogwoodSystemSettings();

};

