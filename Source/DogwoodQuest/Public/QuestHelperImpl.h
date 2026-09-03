#pragma once
#include "CoreMinimal.h"
#include "SaveGameInterface.h"
#include "QuestHelperInterface.h"
#include "QuestHelperImpl.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestHelperImpl : public UQuestHelperInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SoftObjectPtrPersistencyCache;
    
public:
    UQuestHelperImpl();


    // Fix for true pure virtual functions not being implemented
};

