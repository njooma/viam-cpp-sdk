// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: service/generic/v1/generic.proto
#ifndef GRPC_service_2fgeneric_2fv1_2fgeneric_2eproto__INCLUDED
#define GRPC_service_2fgeneric_2fv1_2fgeneric_2eproto__INCLUDED

#include "service/generic/v1/generic.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace viam {
namespace service {
namespace generic {
namespace v1 {

// GenericService services all generic services associated with a robot
class GenericService final {
 public:
  static constexpr char const* service_full_name() {
    return "viam.service.generic.v1.GenericService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // DoCommand sends/receives arbitrary commands
    virtual ::grpc::Status DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::viam::common::v1::DoCommandResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>> AsyncDoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>>(AsyncDoCommandRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>> PrepareAsyncDoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>>(PrepareAsyncDoCommandRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // DoCommand sends/receives arbitrary commands
      virtual void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>* AsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::viam::common::v1::DoCommandResponse>* PrepareAsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::viam::common::v1::DoCommandResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>> AsyncDoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>>(AsyncDoCommandRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>> PrepareAsyncDoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>>(PrepareAsyncDoCommandRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)>) override;
      void DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void DoCommand(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void DoCommand(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::viam::common::v1::DoCommandResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>* AsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::viam::common::v1::DoCommandResponse>* PrepareAsyncDoCommandRaw(::grpc::ClientContext* context, const ::viam::common::v1::DoCommandRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_DoCommand_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // DoCommand sends/receives arbitrary commands
    virtual ::grpc::Status DoCommand(::grpc::ServerContext* context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_DoCommand() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoCommand(::grpc::ServerContext* context, ::viam::common::v1::DoCommandRequest* request, ::grpc::ServerAsyncResponseWriter< ::viam::common::v1::DoCommandResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_DoCommand<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_DoCommand() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::viam::common::v1::DoCommandRequest* request, ::viam::common::v1::DoCommandResponse* response) { return this->DoCommand(context, request, response); }));}
    void SetMessageAllocatorFor_DoCommand(
        ::grpc::experimental::MessageAllocator< ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* DoCommand(
      ::grpc::CallbackServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* DoCommand(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_DoCommand<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_DoCommand<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_DoCommand() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_DoCommand() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDoCommand(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_DoCommand() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->DoCommand(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* DoCommand(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* DoCommand(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DoCommand : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_DoCommand() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>(
            [this](::grpc_impl::ServerContext* context,
                   ::grpc_impl::ServerUnaryStreamer<
                     ::viam::common::v1::DoCommandRequest, ::viam::common::v1::DoCommandResponse>* streamer) {
                       return this->StreamedDoCommand(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_DoCommand() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DoCommand(::grpc::ServerContext* /*context*/, const ::viam::common::v1::DoCommandRequest* /*request*/, ::viam::common::v1::DoCommandResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDoCommand(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::viam::common::v1::DoCommandRequest,::viam::common::v1::DoCommandResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_DoCommand<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_DoCommand<Service > StreamedService;
};

}  // namespace v1
}  // namespace generic
}  // namespace service
}  // namespace viam


#endif  // GRPC_service_2fgeneric_2fv1_2fgeneric_2eproto__INCLUDED
