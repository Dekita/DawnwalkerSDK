#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SkillBookLootEntry.h"
#include "SkillBookPoolDataAsset.generated.h"

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API USkillBookPoolDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillBookLootEntry> Pool;
    
    USkillBookPoolDataAsset();

};

