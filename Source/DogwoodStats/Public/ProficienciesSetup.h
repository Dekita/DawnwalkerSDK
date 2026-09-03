#pragma once
#include "CoreMinimal.h"
#include "ProficiencySetup.h"
#include "ProficienciesSetup.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FProficienciesSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProficiencySetup WeaponRarity_Master;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProficiencySetup WeaponRarity_Epic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProficiencySetup WeaponRarity_Legendary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProficiencySetup ArmorRarity_Master;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProficiencySetup ArmorRarity_Epic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProficiencySetup ArmorRarity_Legendary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProficiencySetup ArmorWeight_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProficiencySetup ArmorWeight_Heavy;
    
    FProficienciesSetup();
};

