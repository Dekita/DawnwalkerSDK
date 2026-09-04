#pragma once
#include "CoreMinimal.h"
#include "ERecordingType.h"
#include "LineImportInfo.h"
#include "SpokenLine.h"
#include "CinematicLine.generated.h"

class UAkAudioEvent;
class ULevelSequence;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCinematicLine : public FSpokenLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<ULevelSequence>> LevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLineImportInfo> LanguagesLineImportInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecordingType RecordingType;
    
    FCinematicLine();
};

