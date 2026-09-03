#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EReadableBackgroundType.h"
#include "EReadableDecalType.h"
#include "EReadableSealType.h"
#include "ReadableBackgroundTypeRow.h"
#include "ReadableDecalTypeRow.h"
#include "ReadableSealTypeRow.h"
#include "DogwoodGlossarySettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODGLOSSARY_API UDogwoodGlossarySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> GlossaryTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EReadableBackgroundType, FReadableBackgroundTypeRow> ReadableBackgrounds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EReadableDecalType, FReadableDecalTypeRow> ReadableDecals;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EReadableSealType, FReadableSealTypeRow> ReadableSeals;
    
public:
    UDogwoodGlossarySettings();

};

