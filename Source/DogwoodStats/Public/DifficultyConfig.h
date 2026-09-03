#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERebelGameDifficulty.h"
#include "DogwoodActionDifficulty.h"
#include "DogwoodRPGDifficulty.h"
#include "DifficultyConfig.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class DOGWOODSTATS_API UDifficultyConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelGameDifficulty, FText> DifficultyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelGameDifficulty, FText> ShortDifficultyDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelGameDifficulty, TSoftObjectPtr<UTexture2D>> DifficultyImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelGameDifficulty, FDogwoodActionDifficulty> ActionDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelGameDifficulty, FDogwoodRPGDifficulty> RPGDifficulties;
    
    UDifficultyConfig();

};

