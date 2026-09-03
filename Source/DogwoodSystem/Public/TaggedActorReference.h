#pragma once
#include "CoreMinimal.h"
#include "QuestActorRequest.h"
#include "ActorReferenceType.h"
#include "TaggedActorReference.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UTaggedActorReference : public UActorReferenceType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestActorRequest ActorRequest;
    
public:
    UTaggedActorReference();

};

