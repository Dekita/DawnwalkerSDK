#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PoliceSquadCommunityEntryProvider.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UPoliceSquadCommunityEntryProvider : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataSource;
    
public:
    UPoliceSquadCommunityEntryProvider();

};

