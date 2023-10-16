
(cl:in-package :asdf)

(defsystem "hrwros_week1_assignment-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "BoxHeightInformation" :depends-on ("_package_BoxHeightInformation"))
    (:file "_package_BoxHeightInformation" :depends-on ("_package"))
  ))