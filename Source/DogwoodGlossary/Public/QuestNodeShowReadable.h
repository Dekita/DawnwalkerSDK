#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeShowReadable.generated.h"

class UReadableDataAsset;

UCLASS(Blueprintable)
class DOGWOODGLOSSARY_API UQuestNodeShowReadable : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipIfRead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UReadableDataAsset> ReadableDataAsset;
    
public:
    UQuestNodeShowReadable();

};

