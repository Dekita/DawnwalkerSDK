#pragma once
#include "CoreMinimal.h"
#include "DefaultMovieSet.generated.h"

class ADialogueMovieSet;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDefaultMovieSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADialogueMovieSet* MovieSetInstance;
    
public:
    FDefaultMovieSet();
};

