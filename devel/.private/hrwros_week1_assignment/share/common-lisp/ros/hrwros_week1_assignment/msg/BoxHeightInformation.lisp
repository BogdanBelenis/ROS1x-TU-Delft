; Auto-generated. Do not edit!


(cl:in-package hrwros_week1_assignment-msg)


;//! \htmlinclude BoxHeightInformation.msg.html

(cl:defclass <BoxHeightInformation> (roslisp-msg-protocol:ros-message)
  ((box_height
    :reader box_height
    :initarg :box_height
    :type cl:float
    :initform 0.0))
)

(cl:defclass BoxHeightInformation (<BoxHeightInformation>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <BoxHeightInformation>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'BoxHeightInformation)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hrwros_week1_assignment-msg:<BoxHeightInformation> is deprecated: use hrwros_week1_assignment-msg:BoxHeightInformation instead.")))

(cl:ensure-generic-function 'box_height-val :lambda-list '(m))
(cl:defmethod box_height-val ((m <BoxHeightInformation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hrwros_week1_assignment-msg:box_height-val is deprecated.  Use hrwros_week1_assignment-msg:box_height instead.")
  (box_height m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <BoxHeightInformation>) ostream)
  "Serializes a message object of type '<BoxHeightInformation>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'box_height))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <BoxHeightInformation>) istream)
  "Deserializes a message object of type '<BoxHeightInformation>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'box_height) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<BoxHeightInformation>)))
  "Returns string type for a message object of type '<BoxHeightInformation>"
  "hrwros_week1_assignment/BoxHeightInformation")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BoxHeightInformation)))
  "Returns string type for a message object of type 'BoxHeightInformation"
  "hrwros_week1_assignment/BoxHeightInformation")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<BoxHeightInformation>)))
  "Returns md5sum for a message object of type '<BoxHeightInformation>"
  "709f751d567a4f5ed90345621271840c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'BoxHeightInformation)))
  "Returns md5sum for a message object of type 'BoxHeightInformation"
  "709f751d567a4f5ed90345621271840c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<BoxHeightInformation>)))
  "Returns full string definition for message of type '<BoxHeightInformation>"
  (cl:format cl:nil "float64 box_height      # Add your code for part 2 here~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'BoxHeightInformation)))
  "Returns full string definition for message of type 'BoxHeightInformation"
  (cl:format cl:nil "float64 box_height      # Add your code for part 2 here~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <BoxHeightInformation>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <BoxHeightInformation>))
  "Converts a ROS message object to a list"
  (cl:list 'BoxHeightInformation
    (cl:cons ':box_height (box_height msg))
))
