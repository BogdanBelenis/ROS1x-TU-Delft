// Auto-generated. Do not edit!

// (in-package hrwros_week1_assignment.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class BoxHeightInformation {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.box_height = null;
    }
    else {
      if (initObj.hasOwnProperty('box_height')) {
        this.box_height = initObj.box_height
      }
      else {
        this.box_height = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type BoxHeightInformation
    // Serialize message field [box_height]
    bufferOffset = _serializer.float64(obj.box_height, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type BoxHeightInformation
    let len;
    let data = new BoxHeightInformation(null);
    // Deserialize message field [box_height]
    data.box_height = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'hrwros_week1_assignment/BoxHeightInformation';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '709f751d567a4f5ed90345621271840c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 box_height      # Add your code for part 2 here
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new BoxHeightInformation(null);
    if (msg.box_height !== undefined) {
      resolved.box_height = msg.box_height;
    }
    else {
      resolved.box_height = 0.0
    }

    return resolved;
    }
};

module.exports = BoxHeightInformation;
