#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MappinSource.h"
#include "CommunityStubMappinSource.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class QUEST_API UCommunityStubMappinSource : public UMappinSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CommunityStubDefinition;
    
public:
    UCommunityStubMappinSource();

};

