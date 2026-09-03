#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CreatureEntry.h"
#include "CreaturesSubsystem.generated.h"

class AActor;
class UCurveTable;
class UDataTable;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UCreaturesSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedCreaturesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveTable* LoadedCreaturesEscapeChancePresetsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FCreatureEntry> CreaturesEntryMap;
    
public:
    UCreaturesSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCreatureEntry GetCreatureEntryFromActor(const AActor* InActor, bool& bOutResult) const;
    
};

