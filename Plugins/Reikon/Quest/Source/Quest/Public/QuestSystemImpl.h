#pragma once
#include "CoreMinimal.h"
#include "SaveGameInterface.h"
#include "QuestNodeRuntimeId.h"
#include "QuestSystemInterface.h"
#include "QuestSystemImpl.generated.h"

class UFactsDB;
class UJournal;
class UQuestActorObserver;
class UQuestGraphInstance;
class UQuestImGuiHelper;
class UQuestMemoryBaseProfiler;
class UQuestNodeController;
class UQuestSavegameManager;
class UQuestTaskBase;

UCLASS(Blueprintable)
class UQuestSystemImpl : public UQuestSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestTaskBase*> QueuedTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestGraphInstance* RootGraphInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveQuestSketchNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FQuestNodeRuntimeId, UQuestNodeController*> WaitControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFactsDB* FactsDBs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJournal* Journal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestActorObserver* ActorObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestMemoryBaseProfiler* Profiler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestSavegameManager* SavegameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestImGuiHelper* ImGuiHelper;
    
public:
    UQuestSystemImpl();


    // Fix for true pure virtual functions not being implemented
};

