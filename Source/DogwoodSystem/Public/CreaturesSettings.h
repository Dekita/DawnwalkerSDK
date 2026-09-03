#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CreaturesSettings.generated.h"

class UCurveTable;
class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODSYSTEM_API UCreaturesSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CreaturesTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> CreaturesEscapeChanceTable;
    
    UCreaturesSettings();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetCreatureTypes();
    
};

