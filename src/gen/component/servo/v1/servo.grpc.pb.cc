// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: component/servo/v1/servo.proto

#include "component/servo/v1/servo.pb.h"
#include "component/servo/v1/servo.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace viam {
namespace component {
namespace servo {
namespace v1 {

static const char* ServoService_method_names[] = {
  "/viam.component.servo.v1.ServoService/Move",
  "/viam.component.servo.v1.ServoService/GetPosition",
  "/viam.component.servo.v1.ServoService/Stop",
};

std::unique_ptr< ServoService::Stub> ServoService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ServoService::Stub> stub(new ServoService::Stub(channel, options));
  return stub;
}

ServoService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Move_(ServoService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetPosition_(ServoService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Stop_(ServoService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ServoService::Stub::Move(::grpc::ClientContext* context, const ::viam::component::servo::v1::MoveRequest& request, ::viam::component::servo::v1::MoveResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::component::servo::v1::MoveRequest, ::viam::component::servo::v1::MoveResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Move_, context, request, response);
}

void ServoService::Stub::async::Move(::grpc::ClientContext* context, const ::viam::component::servo::v1::MoveRequest* request, ::viam::component::servo::v1::MoveResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::component::servo::v1::MoveRequest, ::viam::component::servo::v1::MoveResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Move_, context, request, response, std::move(f));
}

void ServoService::Stub::async::Move(::grpc::ClientContext* context, const ::viam::component::servo::v1::MoveRequest* request, ::viam::component::servo::v1::MoveResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Move_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::component::servo::v1::MoveResponse>* ServoService::Stub::PrepareAsyncMoveRaw(::grpc::ClientContext* context, const ::viam::component::servo::v1::MoveRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::component::servo::v1::MoveResponse, ::viam::component::servo::v1::MoveRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Move_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::component::servo::v1::MoveResponse>* ServoService::Stub::AsyncMoveRaw(::grpc::ClientContext* context, const ::viam::component::servo::v1::MoveRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMoveRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ServoService::Stub::GetPosition(::grpc::ClientContext* context, const ::viam::component::servo::v1::GetPositionRequest& request, ::viam::component::servo::v1::GetPositionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::component::servo::v1::GetPositionRequest, ::viam::component::servo::v1::GetPositionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetPosition_, context, request, response);
}

void ServoService::Stub::async::GetPosition(::grpc::ClientContext* context, const ::viam::component::servo::v1::GetPositionRequest* request, ::viam::component::servo::v1::GetPositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::component::servo::v1::GetPositionRequest, ::viam::component::servo::v1::GetPositionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetPosition_, context, request, response, std::move(f));
}

void ServoService::Stub::async::GetPosition(::grpc::ClientContext* context, const ::viam::component::servo::v1::GetPositionRequest* request, ::viam::component::servo::v1::GetPositionResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetPosition_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::component::servo::v1::GetPositionResponse>* ServoService::Stub::PrepareAsyncGetPositionRaw(::grpc::ClientContext* context, const ::viam::component::servo::v1::GetPositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::component::servo::v1::GetPositionResponse, ::viam::component::servo::v1::GetPositionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetPosition_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::component::servo::v1::GetPositionResponse>* ServoService::Stub::AsyncGetPositionRaw(::grpc::ClientContext* context, const ::viam::component::servo::v1::GetPositionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetPositionRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status ServoService::Stub::Stop(::grpc::ClientContext* context, const ::viam::component::servo::v1::StopRequest& request, ::viam::component::servo::v1::StopResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::viam::component::servo::v1::StopRequest, ::viam::component::servo::v1::StopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Stop_, context, request, response);
}

void ServoService::Stub::async::Stop(::grpc::ClientContext* context, const ::viam::component::servo::v1::StopRequest* request, ::viam::component::servo::v1::StopResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::viam::component::servo::v1::StopRequest, ::viam::component::servo::v1::StopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, std::move(f));
}

void ServoService::Stub::async::Stop(::grpc::ClientContext* context, const ::viam::component::servo::v1::StopRequest* request, ::viam::component::servo::v1::StopResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Stop_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::viam::component::servo::v1::StopResponse>* ServoService::Stub::PrepareAsyncStopRaw(::grpc::ClientContext* context, const ::viam::component::servo::v1::StopRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::viam::component::servo::v1::StopResponse, ::viam::component::servo::v1::StopRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Stop_, context, request);
}

::grpc::ClientAsyncResponseReader< ::viam::component::servo::v1::StopResponse>* ServoService::Stub::AsyncStopRaw(::grpc::ClientContext* context, const ::viam::component::servo::v1::StopRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncStopRaw(context, request, cq);
  result->StartCall();
  return result;
}

ServoService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ServoService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ServoService::Service, ::viam::component::servo::v1::MoveRequest, ::viam::component::servo::v1::MoveResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ServoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::component::servo::v1::MoveRequest* req,
             ::viam::component::servo::v1::MoveResponse* resp) {
               return service->Move(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ServoService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ServoService::Service, ::viam::component::servo::v1::GetPositionRequest, ::viam::component::servo::v1::GetPositionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ServoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::component::servo::v1::GetPositionRequest* req,
             ::viam::component::servo::v1::GetPositionResponse* resp) {
               return service->GetPosition(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ServoService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ServoService::Service, ::viam::component::servo::v1::StopRequest, ::viam::component::servo::v1::StopResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](ServoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::viam::component::servo::v1::StopRequest* req,
             ::viam::component::servo::v1::StopResponse* resp) {
               return service->Stop(ctx, req, resp);
             }, this)));
}

ServoService::Service::~Service() {
}

::grpc::Status ServoService::Service::Move(::grpc::ServerContext* context, const ::viam::component::servo::v1::MoveRequest* request, ::viam::component::servo::v1::MoveResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServoService::Service::GetPosition(::grpc::ServerContext* context, const ::viam::component::servo::v1::GetPositionRequest* request, ::viam::component::servo::v1::GetPositionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ServoService::Service::Stop(::grpc::ServerContext* context, const ::viam::component::servo::v1::StopRequest* request, ::viam::component::servo::v1::StopResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace viam
}  // namespace component
}  // namespace servo
}  // namespace v1

