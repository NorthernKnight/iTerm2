// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class ITMCodePointsPerCell;
@class ITMCoord;
@class ITMCoordRange;
@class ITMGetBufferRequest;
@class ITMGetBufferResponse;
@class ITMGetPromptRequest;
@class ITMGetPromptResponse;
@class ITMLineContents;
@class ITMLineRange;
@class ITMRange;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum ITMGetBufferResponse_Status

typedef GPB_ENUM(ITMGetBufferResponse_Status) {
  ITMGetBufferResponse_Status_Ok = 0,
  ITMGetBufferResponse_Status_SessionNotFound = 1,
  ITMGetBufferResponse_Status_InvalidLineRange = 2,
  ITMGetBufferResponse_Status_RequestMalformed = 3,
};

GPBEnumDescriptor *ITMGetBufferResponse_Status_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMGetBufferResponse_Status_IsValidValue(int32_t value);

#pragma mark - Enum ITMGetPromptResponse_Status

typedef GPB_ENUM(ITMGetPromptResponse_Status) {
  ITMGetPromptResponse_Status_Ok = 0,
  ITMGetPromptResponse_Status_SessionNotFound = 1,
  ITMGetPromptResponse_Status_RequestMalformed = 2,
  ITMGetPromptResponse_Status_PromptUnavailable = 3,
};

GPBEnumDescriptor *ITMGetPromptResponse_Status_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMGetPromptResponse_Status_IsValidValue(int32_t value);

#pragma mark - Enum ITMLineContents_Continuation

/** How does this line end? */
typedef GPB_ENUM(ITMLineContents_Continuation) {
  /** This line is not wrapped. */
  ITMLineContents_Continuation_ContinuationHardEol = 1,

  /** The next line is a continuation of this line. */
  ITMLineContents_Continuation_ContinuationSoftEol = 2,
};

GPBEnumDescriptor *ITMLineContents_Continuation_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ITMLineContents_Continuation_IsValidValue(int32_t value);

#pragma mark - ITMApiRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface ITMApiRoot : GPBRootObject
@end

#pragma mark - ITMRequest

typedef GPB_ENUM(ITMRequest_FieldNumber) {
  ITMRequest_FieldNumber_Id_p = 1,
  ITMRequest_FieldNumber_GetBufferRequest = 100,
  ITMRequest_FieldNumber_GetPromptRequest = 101,
};

/**
 * All requests are wrapped in this message.
 **/
@interface ITMRequest : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite, strong, null_resettable) ITMGetBufferRequest *getBufferRequest;
/** Test to see if @c getBufferRequest has been set. */
@property(nonatomic, readwrite) BOOL hasGetBufferRequest;

@property(nonatomic, readwrite, strong, null_resettable) ITMGetPromptRequest *getPromptRequest;
/** Test to see if @c getPromptRequest has been set. */
@property(nonatomic, readwrite) BOOL hasGetPromptRequest;

@end

#pragma mark - ITMResponse

typedef GPB_ENUM(ITMResponse_FieldNumber) {
  ITMResponse_FieldNumber_Id_p = 1,
  ITMResponse_FieldNumber_GetBufferResponse = 100,
  ITMResponse_FieldNumber_GetPromptResponse = 101,
};

/**
 * All responses are wrapped in this message.
 **/
@interface ITMResponse : GPBMessage

@property(nonatomic, readwrite) int64_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite, strong, null_resettable) ITMGetBufferResponse *getBufferResponse;
/** Test to see if @c getBufferResponse has been set. */
@property(nonatomic, readwrite) BOOL hasGetBufferResponse;

@property(nonatomic, readwrite, strong, null_resettable) ITMGetPromptResponse *getPromptResponse;
/** Test to see if @c getPromptResponse has been set. */
@property(nonatomic, readwrite) BOOL hasGetPromptResponse;

@end

#pragma mark - ITMGetBufferRequest

typedef GPB_ENUM(ITMGetBufferRequest_FieldNumber) {
  ITMGetBufferRequest_FieldNumber_Session = 1,
  ITMGetBufferRequest_FieldNumber_LineRange = 2,
};

/**
 * Requests the contents of a range of lines.
 **/
@interface ITMGetBufferRequest : GPBMessage

/** Leave this empty to use the current session, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *session;
/** Test to see if @c session has been set. */
@property(nonatomic, readwrite) BOOL hasSession;

/** Which lines to return? */
@property(nonatomic, readwrite, strong, null_resettable) ITMLineRange *lineRange;
/** Test to see if @c lineRange has been set. */
@property(nonatomic, readwrite) BOOL hasLineRange;

@end

#pragma mark - ITMGetBufferResponse

typedef GPB_ENUM(ITMGetBufferResponse_FieldNumber) {
  ITMGetBufferResponse_FieldNumber_Status = 1,
  ITMGetBufferResponse_FieldNumber_Range = 2,
  ITMGetBufferResponse_FieldNumber_ContentsArray = 3,
};

/**
 * Contains the contents of a range of lines.
 **/
@interface ITMGetBufferResponse : GPBMessage

@property(nonatomic, readwrite) ITMGetBufferResponse_Status status;

@property(nonatomic, readwrite) BOOL hasStatus;
/** Which lines were returned */
@property(nonatomic, readwrite, strong, null_resettable) ITMRange *range;
/** Test to see if @c range has been set. */
@property(nonatomic, readwrite) BOOL hasRange;

/** Those lines' contents. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ITMLineContents*> *contentsArray;
/** The number of items in @c contentsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger contentsArray_Count;

@end

#pragma mark - ITMGetPromptRequest

typedef GPB_ENUM(ITMGetPromptRequest_FieldNumber) {
  ITMGetPromptRequest_FieldNumber_Session = 1,
};

/**
 * Requests metadata about the current shell prompt.
 **/
@interface ITMGetPromptRequest : GPBMessage

/** Leave this empty to use the current session, if any. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *session;
/** Test to see if @c session has been set. */
@property(nonatomic, readwrite) BOOL hasSession;

@end

#pragma mark - ITMGetPromptResponse

typedef GPB_ENUM(ITMGetPromptResponse_FieldNumber) {
  ITMGetPromptResponse_FieldNumber_Status = 1,
  ITMGetPromptResponse_FieldNumber_PromptRange = 2,
  ITMGetPromptResponse_FieldNumber_CommandRange = 3,
  ITMGetPromptResponse_FieldNumber_OutputRange = 4,
};

/**
 * Reponds with metadata about the current shell prompt, if possible.
 **/
@interface ITMGetPromptResponse : GPBMessage

@property(nonatomic, readwrite) ITMGetPromptResponse_Status status;

@property(nonatomic, readwrite) BOOL hasStatus;
@property(nonatomic, readwrite, strong, null_resettable) ITMCoordRange *promptRange;
/** Test to see if @c promptRange has been set. */
@property(nonatomic, readwrite) BOOL hasPromptRange;

@property(nonatomic, readwrite, strong, null_resettable) ITMCoordRange *commandRange;
/** Test to see if @c commandRange has been set. */
@property(nonatomic, readwrite) BOOL hasCommandRange;

@property(nonatomic, readwrite, strong, null_resettable) ITMCoordRange *outputRange;
/** Test to see if @c outputRange has been set. */
@property(nonatomic, readwrite) BOOL hasOutputRange;

@end

#pragma mark - ITMLineRange

typedef GPB_ENUM(ITMLineRange_FieldNumber) {
  ITMLineRange_FieldNumber_ScreenContentsOnly = 2,
  ITMLineRange_FieldNumber_TrailingLines = 3,
};

/**
 * Describes a range of lines.
 **/
@interface ITMLineRange : GPBMessage

/**
 * Only one of these fields should be set:
 * ---------------------------------------
 * Return just the current contents of the screen.
 **/
@property(nonatomic, readwrite) BOOL screenContentsOnly;

@property(nonatomic, readwrite) BOOL hasScreenContentsOnly;
/**
 * Return the last `trailing lines` of the buffer, which could go back into
 * scrollback history.
 **/
@property(nonatomic, readwrite) int32_t trailingLines;

@property(nonatomic, readwrite) BOOL hasTrailingLines;
@end

#pragma mark - ITMRange

typedef GPB_ENUM(ITMRange_FieldNumber) {
  ITMRange_FieldNumber_Location = 1,
  ITMRange_FieldNumber_Length = 2,
};

/**
 * Describes a range of values.
 **/
@interface ITMRange : GPBMessage

@property(nonatomic, readwrite) int64_t location;

@property(nonatomic, readwrite) BOOL hasLocation;
@property(nonatomic, readwrite) int64_t length;

@property(nonatomic, readwrite) BOOL hasLength;
@end

#pragma mark - ITMCoordRange

typedef GPB_ENUM(ITMCoordRange_FieldNumber) {
  ITMCoordRange_FieldNumber_Start = 1,
  ITMCoordRange_FieldNumber_End = 2,
};

/**
 * Describes a range of cells.
 * |..xxxxx|
 * |xxxx...|
 * start=(0,2) end=(4, 1)
 * The end coordinate is the first cell *after* the end of the range described (so an empty range
 * has start == end)
 **/
@interface ITMCoordRange : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ITMCoord *start;
/** Test to see if @c start has been set. */
@property(nonatomic, readwrite) BOOL hasStart;

@property(nonatomic, readwrite, strong, null_resettable) ITMCoord *end;
/** Test to see if @c end has been set. */
@property(nonatomic, readwrite) BOOL hasEnd;

@end

#pragma mark - ITMCoord

typedef GPB_ENUM(ITMCoord_FieldNumber) {
  ITMCoord_FieldNumber_X = 1,
  ITMCoord_FieldNumber_Y = 2,
};

/**
 * Describes a cell's location.
 **/
@interface ITMCoord : GPBMessage

@property(nonatomic, readwrite) int32_t x;

@property(nonatomic, readwrite) BOOL hasX;
@property(nonatomic, readwrite) int64_t y;

@property(nonatomic, readwrite) BOOL hasY;
@end

#pragma mark - ITMLineContents

typedef GPB_ENUM(ITMLineContents_FieldNumber) {
  ITMLineContents_FieldNumber_Text = 1,
  ITMLineContents_FieldNumber_CodePointsPerCellArray = 2,
  ITMLineContents_FieldNumber_Continuation = 3,
};

/**
 * Describes the content of a line.
 **/
@interface ITMLineContents : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *text;
/** Test to see if @c text has been set. */
@property(nonatomic, readwrite) BOOL hasText;

/**
 * Some cells do not contain one code point. Use this to map code points in
 * `text` to a screen position.
 *
 * For example, consider a line of text that appears on your display like:
 * xyz compañía
 *
 * The corresponding value of `text` would be:
 * xyzcompan~i'a
 *
 * Each code point in "xyz", as well as each of the non-accented letters in
 * compañía, takes one cell.
 *
 * The blank following 'z' is an uninitialized cell that has no code points,
 * so the z and the c in `text` are adjacent.
 *
 * The ñ is composed of the letter n and a combining tilde (U+0303)
 * (indicated in our example as ~), while í
 * is composed of the leter i and a combining acute accent (U+0301)
 * (indicated in our example as ').
 *
 * To map code points in `text` to screen positions, `code_points_per_cell`
 * provides the number of code points in each cell. In our example you would
 * get:
 *
 *   num_code_points=1, repeats=3
 *   num_code_points=0, repeats=1
 *   num_code_points=1, repeats=5
 *   num_code_points=2, repeats=2
 *   num_code_points=1, repeats=1
 *
 * Lines usually end with a series of uninitialized cells. These are not
 * included here.
 *
 * Here is psuedocode to interpret code_points_per_cell:
 *
 * text_index_to_screen_coord = {}
 * screen_coord_to_text_index = {}
 * text_index = 0
 * screen_coord = 0
 * for cpps in code_points_per_cell:
 *   repeat cpps.repeats times:
 *     text_index_to_screen_coord[text_index] = screen_coord
 *     screen_coord_to_text_index[screen_coord] = text_index
 *     text_index += cpps.num_code_points
 *     screen_coord += 1
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ITMCodePointsPerCell*> *codePointsPerCellArray;
/** The number of items in @c codePointsPerCellArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger codePointsPerCellArray_Count;

@property(nonatomic, readwrite) ITMLineContents_Continuation continuation;

@property(nonatomic, readwrite) BOOL hasContinuation;
@end

#pragma mark - ITMCodePointsPerCell

typedef GPB_ENUM(ITMCodePointsPerCell_FieldNumber) {
  ITMCodePointsPerCell_FieldNumber_NumCodePoints = 1,
  ITMCodePointsPerCell_FieldNumber_Repeats = 2,
};

@interface ITMCodePointsPerCell : GPBMessage

/** Number of code points per cell */
@property(nonatomic, readwrite) int32_t numCodePoints;

@property(nonatomic, readwrite) BOOL hasNumCodePoints;
/** Number of adjacent cells with this number of code points (always one or more). */
@property(nonatomic, readwrite) int32_t repeats;

@property(nonatomic, readwrite) BOOL hasRepeats;
@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
