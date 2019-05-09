/* ERR String definitions
 * 
 * NOTE: When adding a new error, please check that the PKI_ERR_
 *       and the corresponding string description match the error!
 */

#ifndef _LIBPKI_ERRORS_H
#define _LIBPKI_ERRORS_H

typedef enum {
	// General Errors
	PKI_ERR_UNKNOWN 	= 0,
	PKI_ERR_GENERAL,
	PKI_ERR_NOT_IMPLEMENTED,
	PKI_ERR_MEMORY_ALLOC,
	PKI_ERR_OBJECT_CREATE,
	PKI_ERR_OBJECT_TYPE_UNKNOWN,
	PKI_ERR_POINTER_NULL,
	PKI_ERR_PARAM_NULL,
	PKI_ERR_PARAM_TYPE,
	PKI_ERR_CALLBACK_NULL,
	PKI_ERR_PKI_FORMAT_UNKNOW,
	PKI_ERR_DATA_FORMAT_UNKNOWN,
	PKI_ERR_DATA_ASN1_ENCODING,
	// PKI MEM Errors
	PKI_ERR_MEM_,
	// PKI DIGEST Errors
	PKI_ERR_DIGEST_TYPE_UNKNOWN,
	PKI_ERR_DIGEST_VALUE_NULL,
	// PKI ALGOR Errors
	PKI_ERR_ALGOR_UNKNOWN,
	PKI_ERR_ALGOR_SET,
	// URI related Errors
	PKI_ERR_URI_UNSUPPORTED,
	PKI_ERR_URI_GENERAL,
	PKI_ERR_URI_PARSE,
	PKI_ERR_URI_OPEN,
	PKI_ERR_URI_CLOSE,
	PKI_ERR_URI_READ,
	PKI_ERR_URI_WRITE,
	PKI_ERR_URI_DNS,
	PKI_ERR_URI_SSL,
	PKI_ERR_URI_SSL_TRUST,
	// HSM Related
	PKI_ERR_HSM_INIT,
	PKI_ERR_HSM_LOGIN,
	PKI_ERR_HSM_SET_ALGOR,
	PKI_ERR_HSM_SET_SLOT,
	PKI_ERR_HSM_KEYPAIR_LOAD,
	PKI_ERR_HSM_KEYPAIR_STORE,
	PKI_ERR_HSM_KEYPAIR_IMPORT,
	PKI_ERR_HSM_KEYPAIR_EXPORT,
	PKI_ERR_HSM_KEYPAIR_GENERATE,
	PKI_ERR_HSM_SCHEME_UNSUPPORTED,
	PKI_ERR_HSM_,
	// Configuration Related
	PKI_ERR_CONFIG_MISSING,
	PKI_ERR_CONFIG_LOAD,
	PKI_ERR_CONFIG_SAVE,
	PKI_ERR_CONFIG_,
	// Profile Related
	PKI_ERR_X509_PROFILE_,
	// Token Related
	PKI_ERR_TOKEN_INIT,
	PKI_ERR_TOKEN_LOGIN,
	PKI_ERR_TOKEN_KEYPAIR_LOAD,
	PKI_ERR_TOKEN_CERT_LOAD,
	PKI_ERR_TOKEN_CACERT_LOAD,
	PKI_ERR_TOKEN_OTHERCERTS_LOAD,
	PKI_ERR_TOKEN_TRUSTEDCERTS_LOAD,
	PKI_ERR_TOKEN_SET_CRED,
	PKI_ERR_TOKEN_USE_SLOT,
	PKI_ERR_TOKEN_PROFILE_LOAD,
	PKI_ERR_TOKEN_SET_ALGOR,
	PKI_ERR_TOKEN_GET_ALGOR,
	PKI_ERR_TOKEN_,
	// Key Operations
	PKI_ERR_X509_KEYPAIR_SIZE,
	PKI_ERR_X509_KEYPAIR_SIZE_SHORT,
	PKI_ERR_X509_KEYPAIR_SIZE_LONG,
	PKI_ERR_X509_KEYPAIR_GENERATION,
	PKI_ERR_X509_KEYPAIR_,
	// Certificate Operations
	PKI_ERR_X509_CERT_CREATE,
	PKI_ERR_X509_CERT_CREATE_SUBJECT,
	PKI_ERR_X509_CERT_CREATE_VERSION,
	PKI_ERR_X509_CERT_CREATE_NOTBEFORE,
	PKI_ERR_X509_CERT_CREATE_NOTAFTER,
	PKI_ERR_X509_CERT_CREATE_ISSUER,
	PKI_ERR_X509_CERT_CREATE_SERIAL,
	PKI_ERR_X509_CERT_CREATE_EXT,
	PKI_ERR_X509_CERT_,
	PKI_ERR_X509_CERT_VERIFY_,
	// Request Operations
	PKI_ERR_X509_REQ_CREATE,
	PKI_ERR_X509_REQ_CREATE_SUBJECT,
	PKI_ERR_X509_REQ_CREATE_VERSION,
	PKI_ERR_X509_REQ_CREATE_NOTBEFORE,
	PKI_ERR_X509_REQ_CREATE_NOTAFTER,
	PKI_ERR_X509_REQ_CREATE_PUBKEY,
	PKI_ERR_X509_REQ_CREATE_ALGORITHM,
	PKI_ERR_X509_REQ_,
	// CRL Errors
	PKI_ERR_X509_CRL,
	// PKI X509 PKCS7 ERRORS
	PKI_ERR_X509_PKCS7_TYPE_UNKNOWN,
	PKI_ERR_X509_PKCS7_SIGNER_INFO_NULL,
	PKI_ERR_X509_PKCS7_CIPHER,
	// PKI X509 CMS ERRORS
	PKI_ERR_X509_CMS_TYPE_UNKNOWN,
	PKI_ERR_X509_CMS_SIGNER_INFO_NULL,
	PKI_ERR_X509_CMS_CIPHER,
	PKI_ERR_X509_CMS_RECIPIENT_INFO_NULL,
	// Generic PKI_X509_AUX_DATA Errors
	PKI_ERR_X509_AUX_DATA_MEMORY_FREE_CB_NULL,
	PKI_ERR_X509_AUX_DATA_MEMORY_DUP_CB_NULL,
	// OCSP Ops
	PKI_ERR_OCSP_RESP_ENCODE,
	PKI_ERR_OCSP_RESP_DECODE,
	PKI_ERR_OCSP_RESP_SIGN,
	PKI_ERR_OCSP_REQ_ENCODE,
	PKI_ERR_OCSP_REQ_DECODE,
	PKI_ERR_OCSP_REQ_SIGN,
	PKI_ERR_OCSP_NONCE_COPY,
	PKI_ERR_OCSP_,
	// PRQP Ops */
	PKI_ERR_PRQP_,
	// PKI Message Operations
	PKI_ERR_MSG_,
	// Enrollment Protocol Related
	PKI_ERR_ENROLL_,
	// Signatures Related Errors
	PKI_ERR_SIGNATURE_CREATE,
	PKI_ERR_SIGNATURE_CREATE_CALLBACK,
	PKI_ERR_SIGNATURE_VERIFY,
	PKI_ERR_SIGNATURE_,
	// Network Related Errors
	PKI_ERR_NET_OPEN,
	PKI_ERR_NET_,
	// SSL/TLS Related Errors
	PKI_ERR_NET_SSL_NOT_SUPPORTED,
	PKI_ERR_NET_SSL_NO_CIPHER,
	PKI_ERR_NET_SSL_VERIFY,
	PKI_ERR_NET_SSL_SET_SOCKET,
	PKI_ERR_NET_SSL_SET_CIPHER,
	PKI_ERR_NET_SSL_SET_FLAGS,
	PKI_ERR_NET_SSL_INIT,
	PKI_ERR_NET_SSL_START,
	PKI_ERR_NET_SSL_CONNECT,
	PKI_ERR_NET_SSL_PEER_CERTIFICATE,
	PKI_ERR_NET_SSL_,
	// EST Related Errors
	PKI_ERR_EST_ATTRIBUTE_UNKNOWN,
	// SCEP Related Errors
	PKI_ERR_SCEP_ATTRIBUTE_UNKNOWN,
	PKI_ERR_SCEP_,
} PKI_ERR_CODE;


#endif // End of _LIBPKI_ERRORS_H
