#pragma once
#include "CoreMinimal.h"
#include "BaseStubReference.h"
#include "CommunityStubAllRowsReferenceType.generated.h"

class UDataTable;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UCommunityStubAllRowsReferenceType : public UBaseStubReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CommunityDefinition;
    
public:
    UCommunityStubAllRowsReferenceType();

};

