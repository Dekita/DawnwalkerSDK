#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NodeOutLinks.h"
#include "QuestSketchOptions.h"
#include "StaticActorDescriptor.h"
#include "QuestSketch.generated.h"

class UNodeBase;
class UQuestOwnerInfo;
class UQuestSketch;

UCLASS(Blueprintable)
class QUEST_API UQuestSketch : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Outputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSketchOptions Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UQuestSketch> SecondarySketchClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticActorDescriptor> StaticActorDescriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestSketch* DefaultObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestSketch*> SketchInstances;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, UNodeBase*> RuntimeNodes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, FNodeOutLinks> RuntimeConnections;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestOwnerInfo* OwnerInfo;
    
public:
    UQuestSketch();

};

