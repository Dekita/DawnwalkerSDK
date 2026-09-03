#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BaseStubReference.h"
#include "CommunityStubReferenceType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UCommunityStubReferenceType : public UBaseStubReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CommunityStubDefinition;
    
public:
    UCommunityStubReferenceType();

};

