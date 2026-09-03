#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeSpawnBase.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UQuestNodeSpawnBase : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Definition;
    
public:
    UQuestNodeSpawnBase();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetEntryNameOptions() const;
    
};

