#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EAlertChange.h"
#include "GameplayTagContainer.h"
#include "EAlertStage.h"
#include "ECourtAllegiance.h"
#include "EdictInfo.h"
#include "CourtSettings.generated.h"

class UCompoundCourtEntry;
class UPaperSprite;
class UStringTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODQUEST_API UCourtSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AlertLevelTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AlertLevelsToHandleTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEdictInfo> Edicts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> EdictsStringTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAlertStage, int32> AlertStagesThresholds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAlertChange, float> AlertChanges;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCompoundCourtEntry> CourtRoot;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerFromUnresolvedChild;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtAllegiance, TSoftObjectPtr<UPaperSprite>> CourtAllegianceIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtAllegiance, TSoftObjectPtr<UPaperSprite>> CourtAllegianceIconsTracked;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtAllegiance, TSoftObjectPtr<UPaperSprite>> CourtFinalQuestIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECourtAllegiance, TSoftObjectPtr<UPaperSprite>> CourtFinalQuestIconsTracked;
    
    UCourtSettings();

};

