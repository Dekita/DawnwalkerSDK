#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestGraphInstance.generated.h"

class UQuestGraphInstance;
class UQuestSketch;

UCLASS(Blueprintable)
class QUEST_API UQuestGraphInstance : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestGraphInstance*> ChildInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UQuestSketch> QuestSketchClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* QuestSketchClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestSketch* Test_QuestSketch;
    
public:
    UQuestGraphInstance();

};

