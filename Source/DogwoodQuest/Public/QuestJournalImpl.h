#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestJournalInterface.h"
#include "SaveGameInterface.h"
#include "QuestJournalImpl.generated.h"

class UPaperSprite;
class UQuest;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestJournalImpl : public UQuestJournalInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UQuest*> LoadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* QuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* TrackedQuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* MainQuestIcon;
    
public:
    UQuestJournalImpl();


    // Fix for true pure virtual functions not being implemented
};

